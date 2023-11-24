-- 코드를 입력하세요
SELECT CAR_ID,
    (CASE
        WHEN CAR_ID IN (
            select car_id
            from CAR_RENTAL_COMPANY_RENTAL_HISTORY
            where START_DATE <= '2022-10-16' AND END_DATE >= '2022-10-16' 
            ) THEN '대여중'    
        ELSE '대여 가능'
     END
    ) as AVAILABILITY

FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY

GROUP BY CAR_ID
ORDER BY CAR_ID DESC