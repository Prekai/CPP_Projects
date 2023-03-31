.PHONY: clean All

All:
	@echo "----------Building project:[ Project45 - Debug ]----------"
	@cd "Project45" && "$(MAKE)" -f  "Project45.mk"
clean:
	@echo "----------Cleaning project:[ Project45 - Debug ]----------"
	@cd "Project45" && "$(MAKE)" -f  "Project45.mk" clean
