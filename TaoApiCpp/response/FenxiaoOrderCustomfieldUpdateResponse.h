#ifndef FENXIAOORDERCUSTOMFIELDUPDATERESPONSE_H
#define FENXIAOORDERCUSTOMFIELDUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 采购单自定义字段
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoOrderCustomfieldUpdateResponse : public TaoResponse
{
public:
 virtual ~FenxiaoOrderCustomfieldUpdateResponse() { }

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
