.PHONY: clean All

All:
	@echo "----------Building project:[ Project49 - Debug ]----------"
	@cd "Project499" && "$(MAKE)" -f  "Project49.mk"
clean:
	@echo "----------Cleaning project:[ Project49 - Debug ]----------"
	@cd "Project499" && "$(MAKE)" -f  "Project49.mk" clean
