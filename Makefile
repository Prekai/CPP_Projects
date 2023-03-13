.PHONY: clean All

All:
	@echo "----------Building project:[ Project42 - Debug ]----------"
	@cd "Project42" && "$(MAKE)" -f  "Project42.mk"
clean:
	@echo "----------Cleaning project:[ Project42 - Debug ]----------"
	@cd "Project42" && "$(MAKE)" -f  "Project42.mk" clean
