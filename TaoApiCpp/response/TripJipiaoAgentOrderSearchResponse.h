#ifndef TRIPJIPIAOAGENTORDERSEARCHRESPONSE_H
#define TRIPJIPIAOAGENTORDERSEARCHRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/SearchOrderResult.h>


/**
 * @brief TOP RESPONSE API: 根据条件查询淘宝订单id列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TripJipiaoAgentOrderSearchResponse : public TaoResponse
{
public:
 virtual ~TripJipiaoAgentOrderSearchResponse() { }

  SearchOrderResult getSearchResult() const;
  void setSearchResult (SearchOrderResult searchResult);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 国内机票订单搜索返回结果对象
 **/
  SearchOrderResult searchResult;

};

#endif
