.PHONY: clean All

All:
	@echo "----------Building project:[ Project43 - Debug ]----------"
	@cd "Project43" && "$(MAKE)" -f  "Project43.mk"
clean:
	@echo "----------Cleaning project:[ Project43 - Debug ]----------"
	@cd "Project43" && "$(MAKE)" -f  "Project43.mk" clean
