#ifndef FENXIAOORDERPAYRESPONSE_H
#define FENXIAOORDERPAYRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 分销商线下付款
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoOrderPayResponse : public TaoResponse
{
public:
 virtual ~FenxiaoOrderPayResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 操作是否成功
 **/
  bool isSuccess;

};

#endif
