.PHONY: clean All

All:
	@echo "----------Building project:[ Project41 - Debug ]----------"
	@cd "Project41" && "$(MAKE)" -f  "Project41.mk"
clean:
	@echo "----------Cleaning project:[ Project41 - Debug ]----------"
	@cd "Project41" && "$(MAKE)" -f  "Project41.mk" clean
