import Control.Monad

fib :: Integer -> Integer
fib n = fib' n 0 1 where
  fib' :: Integer -> Integer -> Integer -> Integer
  fib' 0 n1 _ = n1
  fib' n n1 n2 = fib' (n - 1) n2 (n1 + n2)

main :: IO ()
main = do
  n_temp <- getLine
  let n = read n_temp :: Int
  forM_ [1..n] $ \a0  -> do
    x_temp <- getLine
    let x = read x_temp :: Integer

    print $ mod (fib x) 100000007
