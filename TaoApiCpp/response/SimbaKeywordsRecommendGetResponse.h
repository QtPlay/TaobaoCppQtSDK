#ifndef SIMBAKEYWORDSRECOMMENDGETRESPONSE_H
#define SIMBAKEYWORDSRECOMMENDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/RecommendWordPage.h>


/**
 * @brief TOP RESPONSE API: 取得一个推广组的推荐关键词列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaKeywordsRecommendGetResponse : public TaoResponse
{
public:
 virtual ~SimbaKeywordsRecommendGetResponse() { }

  RecommendWordPage getRecommendWords() const;
  void setRecommendWords (RecommendWordPage recommendWords);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推荐词分页对象，当输入的页码大于最大数值时，将返回最大的page_no值，并且结果中的数据列表为空值
 **/
  RecommendWordPage recommendWords;

};

#endif
