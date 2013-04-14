#ifndef FENXIAODISCOUNTADDRESPONSE_H
#define FENXIAODISCOUNTADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 新增等级折扣
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoDiscountAddResponse : public TaoResponse
{
public:
 virtual ~FenxiaoDiscountAddResponse() { }

  qlonglong getDiscountId() const;
  void setDiscountId (qlonglong discountId);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 折扣ID
 **/
  qlonglong discountId;

};

#endif
