#ifndef FENXIAOPRODUCTCATUPDATERESPONSE_H
#define FENXIAOPRODUCTCATUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 修改产品线
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductcatUpdateResponse : public TaoResponse
{
public:
 virtual ~FenxiaoProductcatUpdateResponse() { }

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
