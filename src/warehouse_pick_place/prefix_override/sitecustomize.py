import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/u05cn23/warehouse_ws/install/warehouse_pick_place'
