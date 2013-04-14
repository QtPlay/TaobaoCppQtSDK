#ifndef FENXIAOCOOPERATIONPRODUCTCATADDRESPONSE_H
#define FENXIAOCOOPERATIONPRODUCTCATADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 追加授权产品线
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoCooperationProductcatAddResponse : public TaoResponse
{
public:
 virtual ~FenxiaoCooperationProductcatAddResponse() { }

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
