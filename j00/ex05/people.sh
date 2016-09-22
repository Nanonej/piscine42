ldapsearch "uid=z*" | grep ^cn | sort -ri | cut -d " " -f 2-
