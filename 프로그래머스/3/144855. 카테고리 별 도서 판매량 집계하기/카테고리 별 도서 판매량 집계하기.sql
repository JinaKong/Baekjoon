-- 코드를 입력하세요
SELECT CATEGORY,
    SUM(SALES) as TOTAL_SALES

FROM BOOK as a
    JOIN BOOK_SALES as b
    ON a.BOOK_ID = b.BOOK_ID
WHERE SALES_DATE LIKE '2022-01-%'

GROUP BY a.CATEGORY
ORDER BY a.CATEGORY