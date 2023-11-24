-- 코드를 입력하세요
SELECT CONCAT(
        '/home/grep/src',
        '/', a.BOARD_ID,
        '/', a.FILE_ID,
        a.FILE_NAME,
        a.FILE_EXT) as 'FILE_PATH'
        
FROM USED_GOODS_FILE as a
    JOIN USED_GOODS_BOARD as b 
    ON a.BOARD_ID = b.BOARD_ID
    
WHERE VIEWS = (SELECT MAX(VIEWS) 
                FROM USED_GOODS_BOARD
              )
ORDER BY FILE_ID DESC;