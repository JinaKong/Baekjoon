-- 코드를 입력하세요
-- daily_fee의 평균 (소수 첫자리에서 반올림) AS AVERAGE_FEE
-- 자동차종류 = 'SUV'
SELECT 
ROUND(AVG(DAILY_FEE), 0) AS AVERAGE_FEE  # AVG 함수이므로 괄호 필수 & 반올림 -> ROUND 함수

FROM 
CAR_RENTAL_COMPANY_CAR 

WHERE
CAR_TYPE='SUV'