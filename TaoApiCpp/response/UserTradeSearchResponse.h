#ifndef USERTRADESEARCHRESPONSE_H
#define USERTRADESEARCHRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/TradeRecord.h>


/**
 * @brief TOP RESPONSE API: 查询支付宝账户交易记录
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UserTradeSearchResponse : public TaoResponse
{
public:
 virtual ~UserTradeSearchResponse() { }

  QString getTotalPages() const;
  void setTotalPages (QString totalPages);  QString getTotalResults() const;
  void setTotalResults (QString totalResults);  QList<TradeRecord> getTradeRecords() const;
  void setTradeRecords (QList<TradeRecord> tradeRecords);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 总页数
 **/
  QString totalPages;

/**
 * @brief 总记录数
 **/
  QString totalResults;

/**
 * @brief 交易记录列表
 **/
  QList<TradeRecord> tradeRecords;

};

#endif
