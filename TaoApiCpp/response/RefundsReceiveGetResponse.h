#ifndef REFUNDSRECEIVEGETRESPONSE_H
#define REFUNDSRECEIVEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Refund.h>


/**
 * @brief TOP RESPONSE API: 查询卖家收到的退款列表，查询外店的退款列表时需要指定交易类型
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RefundsReceiveGetResponse : public TaoResponse
{
public:
 virtual ~RefundsReceiveGetResponse() { }

  bool getHasNext() const;
  void setHasNext (bool hasNext);  QList<Refund> getRefunds() const;
  void setRefunds (QList<Refund> refunds);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 是否存在下一页
 **/
  bool hasNext;

/**
 * @brief 搜索到的退款信息列表
 **/
  QList<Refund> refunds;

/**
 * @brief 搜索到的退款信息总数
 **/
  qlonglong totalResults;

};

#endif
