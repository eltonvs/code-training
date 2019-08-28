strm :: String -> String -> String
strm [] [] = []
strm (x:xs) (y:ys) = x : y : strm xs ys

main :: IO ()
main = do
  str1 <- getLine
  str2 <- getLine
  putStrLn $ strm str1 str2
