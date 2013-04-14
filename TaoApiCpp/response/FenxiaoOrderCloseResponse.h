#ifndef FENXIAOORDERCLOSERESPONSE_H
#define FENXIAOORDERCLOSERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 供应商关闭未付款采购单.可传入一个主单号或是多个子单号，多个子单号之间以‘，’隔开
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoOrderCloseResponse : public TaoResponse
{
public:
 virtual ~FenxiaoOrderCloseResponse() { }

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
