#ifndef FENXIAOPRODUCTPDUUPDATERESPONSE_H
#define FENXIAOPRODUCTPDUUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 产品分销商配额库存新增、修改、删除
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductPduUpdateResponse : public TaoResponse
{
public:
 virtual ~FenxiaoProductPduUpdateResponse() { }

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
