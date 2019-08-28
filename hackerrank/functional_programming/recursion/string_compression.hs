strc :: String -> String
strc [] = []
strc [x] = [x]
strc (x1:x2:xs)
  | x1 == x2 = strc' x1 xs 2
  | otherwise = x1 : strc (x2:xs)
  where
    strc' :: Char -> String -> Int -> String
    strc' c [] n = if n == 1 then [c] else c : show n
    strc' c (x:xs) n
      | c == x = strc' c xs (n + 1)
      | otherwise = c : show n ++ strc (x:xs)

main :: IO ()
main = do
  str <- getLine
  putStrLn $ strc str
