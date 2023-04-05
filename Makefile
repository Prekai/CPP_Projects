.PHONY: clean All

All:
	@echo "----------Building project:[ Project48 - Debug ]----------"
	@cd "Project48" && "$(MAKE)" -f  "Project48.mk"
clean:
	@echo "----------Cleaning project:[ Project48 - Debug ]----------"
	@cd "Project48" && "$(MAKE)" -f  "Project48.mk" clean
