#ifndef BILLBOOKBILLGETRESPONSE_H
#define BILLBOOKBILLGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/BookBill.h>


/**
 * @brief TOP RESPONSE API: 查询单笔虚拟账户明细
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class BillBookBillGetResponse : public TaoResponse
{
public:
 virtual ~BillBookBillGetResponse() { }

  BookBill getBookbill() const;
  void setBookbill (BookBill bookbill);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 虚拟账户账单
 **/
  BookBill bookbill;

};

#endif
