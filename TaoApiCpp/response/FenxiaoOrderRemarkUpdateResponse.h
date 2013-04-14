#ifndef FENXIAOORDERREMARKUPDATERESPONSE_H
#define FENXIAOORDERREMARKUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 供应商修改采购单备注
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoOrderRemarkUpdateResponse : public TaoResponse
{
public:
 virtual ~FenxiaoOrderRemarkUpdateResponse() { }

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
