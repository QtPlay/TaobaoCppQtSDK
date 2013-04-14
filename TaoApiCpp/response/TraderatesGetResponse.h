#ifndef TRADERATESGETRESPONSE_H
#define TRADERATESGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/TradeRate.h>


/**
 * @brief TOP RESPONSE API: 搜索评价信息，只能获取距今180天内的评价记录(只支持查询卖家给出或得到的评价)。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TraderatesGetResponse : public TaoResponse
{
public:
 virtual ~TraderatesGetResponse() { }

  bool getHasNext() const;
  void setHasNext (bool hasNext);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);  QList<TradeRate> getTradeRates() const;
  void setTradeRates (QList<TradeRate> tradeRates);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 当使用use_has_next时返回信息，如果还有下一页则返回true
 **/
  bool hasNext;

/**
 * @brief 搜索到的评价总数。相同的查询时间段条件下，最大只能获取总共1500条评价记录。所以当评价大于等于1500时 ISV可以通过start_date及end_date来进行拆分，以保证可以查询到全部数据
 **/
  qlonglong totalResults;

/**
 * @brief 评价列表。返回的TradeRate包含的具体信息为入参fields请求的字段信息
 **/
  QList<TradeRate> tradeRates;

};

#endif
