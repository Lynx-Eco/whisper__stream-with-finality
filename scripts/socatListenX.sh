xpanes -c "{}" \
    'socat -u UDP-RECV:42000,bind=0.0.0.0 -' \
    'socat -u UDP-RECV:42001,bind=0.0.0.0 -' \
    'socat -u UDP-RECV:42010,bind=0.0.0.0 -'
