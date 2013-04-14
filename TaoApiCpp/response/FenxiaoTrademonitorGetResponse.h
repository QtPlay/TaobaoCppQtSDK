#ifndef FENXIAOTRADEMONITORGETRESPONSE_H
#define FENXIAOTRADEMONITORGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/TradeMonitor.h>


/**
 * @brief TOP RESPONSE API: 仅限供应商调用此接口查询经销商品监控信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoTrademonitorGetResponse : public TaoResponse
{
public:
 virtual ~FenxiaoTrademonitorGetResponse() { }

  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);  QList<TradeMonitor> getTradeMonitors() const;
  void setTradeMonitors (QList<TradeMonitor> tradeMonitors);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 搜索到的经销商品订单数量
 **/
  qlonglong totalResults;

/**
 * @brief 经销商品订单监控信息
 **/
  QList<TradeMonitor> tradeMonitors;

};

#endif
