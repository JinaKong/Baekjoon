-- 코드를 입력하세요
SELECT a.CAR_ID, a.CAR_TYPE, ROUND(a.daily_fee*30*(100-DISCOUNT_RATE)/100, 0) AS FEE

FROM CAR_RENTAL_COMPANY_CAR as a 
    JOIN (
        select * 
        from CAR_RENTAL_COMPANY_DISCOUNT_PLAN 
        where DURATION_TYPE='30일 이상'
    ) as b ON a.car_type = b.car_type
    
WHERE a.car_type IN ('SUV', '세단')
    AND a.daily_fee*30*(100-DISCOUNT_RATE)/100 BETWEEN 500000 AND 2000000
    AND a.car_id NOT IN (
        select car_id 
        from CAR_RENTAL_COMPANY_RENTAL_HISTORY 
        where start_date <= '2022-11-30' AND end_date >= '2022-11-01'
    )
    
ORDER BY 
    FEE DESC, CAR_TYPE ASC, CAR_ID DESC;