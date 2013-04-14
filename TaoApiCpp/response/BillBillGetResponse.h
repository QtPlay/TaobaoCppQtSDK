#ifndef BILLBILLGETRESPONSE_H
#define BILLBILLGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Bill.h>


/**
 * @brief TOP RESPONSE API: 查询单笔账单明细
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class BillBillGetResponse : public TaoResponse
{
public:
 virtual ~BillBillGetResponse() { }

  Bill getBill() const;
  void setBill (Bill bill);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 账单明细
 **/
  Bill bill;

};

#endif
