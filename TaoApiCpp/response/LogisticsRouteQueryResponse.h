#ifndef LOGISTICSROUTEQUERYRESPONSE_H
#define LOGISTICSROUTEQUERYRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/QueryRouteResult.h>


/**
 * @brief TOP RESPONSE API: 根据始发地，目的地等条件查询线路的分页列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsRouteQueryResponse : public TaoResponse
{
public:
 virtual ~LogisticsRouteQueryResponse() { }

  QueryRouteResult getQueryRouteResult() const;
  void setQueryRouteResult (QueryRouteResult queryRouteResult);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 查询线路的结果
 **/
  QueryRouteResult queryRouteResult;

};

#endif
