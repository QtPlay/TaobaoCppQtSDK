#ifndef CAIPIAOPRESENTWINITEMSGETRESPONSE_H
#define CAIPIAOPRESENTWINITEMSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/LotteryWangcaiPresent.h>


/**
 * @brief TOP RESPONSE API: 获取卖家三个月内的中奖订单列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CaipiaoPresentWinItemsGetResponse : public TaoResponse
{
public:
 virtual ~CaipiaoPresentWinItemsGetResponse() { }

  QList<LotteryWangcaiPresent> getResults() const;
  void setResults (QList<LotteryWangcaiPresent> results);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 查询的结果集
 **/
  QList<LotteryWangcaiPresent> results;

/**
 * @brief 查询的结果集大小
 **/
  qlonglong totalResults;

};

#endif
