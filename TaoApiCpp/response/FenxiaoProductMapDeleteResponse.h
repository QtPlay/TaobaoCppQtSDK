#ifndef FENXIAOPRODUCTMAPDELETERESPONSE_H
#define FENXIAOPRODUCTMAPDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 删除分销和供应链商品映射关系。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductMapDeleteResponse : public TaoResponse
{
public:
 virtual ~FenxiaoProductMapDeleteResponse() { }

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
