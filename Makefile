.PHONY: clean All

All:
	@echo "----------Building project:[ Project44 - Debug ]----------"
	@cd "Project44" && "$(MAKE)" -f  "Project44.mk"
clean:
	@echo "----------Cleaning project:[ Project44 - Debug ]----------"
	@cd "Project44" && "$(MAKE)" -f  "Project44.mk" clean
