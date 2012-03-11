if ! [ -z "${2+xxx}" ]; then
	./$1.exe < $2.in > $2.out
else
	./$1.exe
fi