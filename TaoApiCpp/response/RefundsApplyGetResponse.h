#ifndef REFUNDSAPPLYGETRESPONSE_H
#define REFUNDSAPPLYGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Refund.h>


/**
 * @brief TOP RESPONSE API: 查询买家申请的退款列表，且查询外店的退款列表时需要指定交易类型
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RefundsApplyGetResponse : public TaoResponse
{
public:
 virtual ~RefundsApplyGetResponse() { }

  QList<Refund> getRefunds() const;
  void setRefunds (QList<Refund> refunds);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 搜索到的退款信息列表
 **/
  QList<Refund> refunds;

/**
 * @brief 搜索到的交易信息总数
 **/
  qlonglong totalResults;

};

#endif
