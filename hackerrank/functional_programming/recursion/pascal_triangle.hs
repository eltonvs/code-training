pascal :: Int -> IO ()
pascal n = pascalRow 0 (n - 1)

pascalRow :: Int -> Int -> IO ()
pascalRow n m
  | n == m = do
    printPascalRow n
  | otherwise = do
    printPascalRow n
    pascalRow (n + 1) m

printPascalRow :: Int -> IO ()
printPascalRow n = putStrLn $ unwords $ map show $ 1:[quot (fat n) (fat x * (fat (n - x))) | x <- [1..n]]

fat :: Int -> Int
fat n = fat' n 1 where
  fat' 0 acc = acc
  fat' n acc = fat' (n - 1) (acc * n)

main :: IO ()
main = do
  n <- getLine
  pascal $ read n
