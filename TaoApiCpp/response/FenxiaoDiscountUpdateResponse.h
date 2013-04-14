#ifndef FENXIAODISCOUNTUPDATERESPONSE_H
#define FENXIAODISCOUNTUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 修改等级折扣
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoDiscountUpdateResponse : public TaoResponse
{
public:
 virtual ~FenxiaoDiscountUpdateResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 成功状态
 **/
  bool isSuccess;

};

#endif
