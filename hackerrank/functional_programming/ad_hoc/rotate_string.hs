import Control.Monad

rot :: String -> [String]
rot s = rot' (length s) s
  where
    rot' :: Int -> String -> [String]
    rot' _ [] = []
    rot' _ [x] = [[x]]
    rot' c (x:xs) = if c > 1 then ns : rot' (c - 1) ns else [ns] where
      ns = xs ++ [x]

main :: IO ()
main = do
  n_temp <- getLine
  let n = read n_temp :: Int
  forM_ [1..n] $ \a0  -> do
    x <- getLine
    putStrLn $ unwords $ rot x
