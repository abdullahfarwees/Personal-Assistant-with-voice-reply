echo "CPU usage :"
grep 'cpu ' /proc/stat | awk '{usage=($2+$4)*100/($2+$4+$5)} END {print usage "%"}'
echo "RAM usage :"
free | grep Mem | awk '{print $3/$2 * 100.0}'
echo "Battery :"
upower -i $(upower -e | grep BAT) | grep --color=never -E "state|to\ full|to\ empty|percentage"
