#ifndef SCITEMUPDATERESPONSE_H
#define SCITEMUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 根据商品ID或商家编码修改后端商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ScitemUpdateResponse : public TaoResponse
{
public:
 virtual ~ScitemUpdateResponse() { }

  qlonglong getUpdateRows() const;
  void setUpdateRows (qlonglong updateRows);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 更新商品数量,1表示成功更新了一条数据，0：表示未找到匹配的数据
 **/
  qlonglong updateRows;

};

#endif
