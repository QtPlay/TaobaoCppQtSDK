#ifndef FENXIAOPRODUCTMAPADDRESPONSE_H
#define FENXIAOPRODUCTMAPADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 创建分销和供应链商品映射关系。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductMapAddResponse : public TaoResponse
{
public:
 virtual ~FenxiaoProductMapAddResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 操作结果
 **/
  bool isSuccess;

};

#endif
