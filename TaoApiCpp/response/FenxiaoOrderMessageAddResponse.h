#ifndef FENXIAOORDERMESSAGEADDRESPONSE_H
#define FENXIAOORDERMESSAGEADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 添加采购单留言，最多20条（供应商分销商都可添加）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoOrderMessageAddResponse : public TaoResponse
{
public:
 virtual ~FenxiaoOrderMessageAddResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 是否成功
 **/
  bool isSuccess;

};

#endif
