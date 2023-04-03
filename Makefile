.PHONY: clean All

All:
	@echo "----------Building project:[ Project47 - Debug ]----------"
	@cd "Project47" && "$(MAKE)" -f  "Project47.mk"
clean:
	@echo "----------Cleaning project:[ Project47 - Debug ]----------"
	@cd "Project47" && "$(MAKE)" -f  "Project47.mk" clean
