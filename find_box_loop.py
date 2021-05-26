def look_for_key(main_box):
    pile=main_box.make_a_pile_to_look_through()
    while pile is not empty:
        box=pile.grab_a_box()
        for item in box:
            if item.is__box():
                pile.append()
            elif item.is_a_key():
                print("key found")
