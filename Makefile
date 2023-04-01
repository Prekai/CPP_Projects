.PHONY: clean All

All:
	@echo "----------Building project:[ Project46 - Debug ]----------"
	@cd "Project46" && "$(MAKE)" -f  "Project46.mk"
clean:
	@echo "----------Cleaning project:[ Project46 - Debug ]----------"
	@cd "Project46" && "$(MAKE)" -f  "Project46.mk" clean
