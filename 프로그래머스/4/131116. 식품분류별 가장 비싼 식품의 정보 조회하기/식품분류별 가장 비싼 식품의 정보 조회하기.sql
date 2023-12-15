-- 식품분류별로 가격이 제일 비싼 식품
-- 식품분류가 '과자', '국', '김치', '식용유'인 경우만

SELECT CATEGORY,
    PRICE AS MAX_PRICE,
    PRODUCT_NAME
FROM FOOD_PRODUCT 
WHERE CATEGORY IN ('과자', '국', '김치', '식용유')
    AND PRICE IN(SELECT MAX(PRICE)
                FROM FOOD_PRODUCT
                GROUP BY CATEGORY)
ORDER BY PRICE DESC