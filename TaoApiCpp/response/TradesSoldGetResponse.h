#ifndef TRADESSOLDGETRESPONSE_H
#define TRADESSOLDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Trade.h>


/**
 * @brief TOP RESPONSE API: 搜索当前会话用户作为卖家已卖出的交易数据（只能获取到三个月以内的交易信息） 
<br/>1. 返回的数据结果是以订单的创建时间倒序排列的。 
<br/>2. 返回的数据结果只包含了订单的部分数据，可通过taobao.trade.fullinfo.get获取订单详情。 
<br/>3. <span style="color:red">通过异步接口<a href="http://api.taobao.com/apidoc/api.htm?path=cid:5-apiId:11117">taobao.topats.trades.sold.get</a>可以一次性获取卖家3个月内的订单详情数据。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradesSoldGetResponse : public TaoResponse
{
public:
 virtual ~TradesSoldGetResponse() { }

  bool getHasNext() const;
  void setHasNext (bool hasNext);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);  QList<Trade> getTrades() const;
  void setTrades (QList<Trade> trades);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 是否存在下一页
 **/
  bool hasNext;

/**
 * @brief 搜索到的交易信息总数
 **/
  qlonglong totalResults;

/**
 * @brief 搜索到的交易信息列表，返回的Trade和Order中包含的具体信息为入参fields请求的字段信息
 **/
  QList<Trade> trades;

};

#endif
