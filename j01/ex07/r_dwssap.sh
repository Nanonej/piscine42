cat /etc/passwd | sed -e '/^#/ d' | sed -n 'n;p'
