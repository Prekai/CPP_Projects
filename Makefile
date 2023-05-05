.PHONY: clean All

All:
	@echo "----------Building project:[ Project50 - Debug ]----------"
	@cd "Project50" && "$(MAKE)" -f  "Project50.mk"
clean:
	@echo "----------Cleaning project:[ Project50 - Debug ]----------"
	@cd "Project50" && "$(MAKE)" -f  "Project50.mk" clean
