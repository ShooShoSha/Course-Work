from sys import exit

def treasure():
    print "The room is dark. You can smell something mettalic."
    print "What do you do?"

    room_lit = False
    treasures = ["gold", "chalice", "map"]

    while True:
		choice = raw_input("> ")

		if "light" in choice and not room_lit:
			print "You light up the room."
			room_lit = True
		elif "look" in choice and room_lit:
			if len(treasures) > 0:
				print "There is treausre on the ground:"
				for treasure in treasures:
					print treasure
			else:
				print "There isn't anything here."
		elif "look" in choice and not room_lit:
			print "You can't see anything."
		elif "take" in choice and room_lit:
			for treasure in treasures:
				if treasure in choice:
				   treasures.remove(treasure)
				   print "You take the %s" % treasure
		elif "leave" in choice:
			print "You leave the room."
			exit(0)
		else:
			print "Nothing seems to happen."
