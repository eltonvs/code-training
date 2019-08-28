rdups :: String -> String
rdups [] = []
rdups (x:xs) = x : rdups [y | y <- xs, y /= x]

main :: IO ()
main = do
  str <- getLine
  putStrLn $ rdups str
